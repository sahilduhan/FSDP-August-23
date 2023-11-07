const getHtml = (title, id) => {
    return `
        <div class="task" id = "task_${id}" >
            <div class="content">
                <input type="text" id = "${id}"
                value = "${title}"
                placeholder="Something really crazzy!!" class="text" readonly>
            </div>
            <div class="actions">
                <button class="editButton" onclick="editTask('${id}')"> Edit Task </button>
                <button class="saveButton" onclick="saveTask('${id}')"> Save Task </button>
                <button class="deleteButton" onclick="deleteTask('${id}')"> Delete Task </button>
            </div>
        </div>
    `
}

const saveTask = (id) => {
    const task = document.getElementById(id);
    task.readOnly = true;
}

const editTask = (id) => {
    const task = document.getElementById(id);
    task.readOnly = false;
    task.focus();
}

const deleteTask = (id) => {
    const task = document.getElementById('task_'+id);
    task.remove();
} 

window.addEventListener('load',() => {

    const form = document.querySelector('.taskForm');
    const taskList = document.querySelector('.tasks');

    form.addEventListener('submit',(e)=>{
        e.preventDefault();
        const title = e.target[0].value;
        taskList.innerHTML += getHtml(title, new Date ());
    })
})