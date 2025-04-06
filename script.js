const topics = {
    "Array": ["reverse_array.cpp","Sorting.cpp"],
    "Stack": ["Stack_Implementation.cpp"],
    "Linked List": ["Middle_Of_Linked_List.cpp"],
    "Queue": ["Queue_Implementation.cpp"],
    "Binary Tree": ["Build_Tree.cpp","Inorder.cpp","Preorder.cpp","Postorder.cpp","BFS_with_nullptr.cpp","BFS_without_nullptr.cpp","LeftView.cpp","RightView.cpp","Maximum_Depth.cpp"],
    "Graph": ["Graph_Implementation.cpp","BFS.cpp"],
    "Searching": ["Binary_Search_Iterative.cpp","Binary_Search_Recursive.cpp"],
    "Sorting": ["Quick_Sort.cpp"]
  };
  
  const container = document.getElementById("topics");
  
  for (let topic in topics) {
    const topicDiv = document.createElement("div");
    topicDiv.className = "topic";
    topicDiv.innerHTML = `<strong>${topic}</strong>`;
  
    const subDiv = document.createElement("div");
    subDiv.className = "subtopics";
  
    topics[topic].forEach(file => {
      const link = document.createElement("a");
      link.href = `viewer.html?topic=${encodeURIComponent(topic)}&file=${encodeURIComponent(file)}`;
      link.textContent = file.replace(".cpp", "");
      subDiv.appendChild(link);
    });
  
    topicDiv.appendChild(subDiv);
    topicDiv.addEventListener("click", () => {
      topicDiv.classList.toggle("active");
    });
  
    container.appendChild(topicDiv);
  }
  
