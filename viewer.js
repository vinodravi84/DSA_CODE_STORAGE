function getParams() {
    const urlParams = new URLSearchParams(window.location.search);
    return {
      topic: urlParams.get('topic'),
      file: urlParams.get('file')
    };
  }
  
  async function loadCode() {
    const { topic, file } = getParams();
    document.getElementById("file-title").textContent = `${file}`;
  
    const response = await fetch(`codes/${topic}/${file}`);
    const code = await response.text();
    const codeBlock = document.getElementById("code-block");
  
    codeBlock.textContent = code;
    hljs.highlightElement(codeBlock); // 👈 Syntax highlight
  }
  
  function copyCode() {
    const code = document.getElementById("code-block").textContent;
    const copyBtn = document.querySelector(".copy-btn");
  
    navigator.clipboard.writeText(code).then(() => {
      copyBtn.textContent = "✅ Copied";
      setTimeout(() => {
        copyBtn.textContent = "📋 Copy";
      }, 1500);
    });
  }
  
  
  
  loadCode();
  